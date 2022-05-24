//
// copyright 2018 Palestine Polytechnic Univeristy
//
// This software can be used and/or modified for academich use as long as 
// this commented part is listed
//
// Last modified by: Zein Salah, on 26.02.2022
//


#include "PPUViewer.h"
#include "RenderWidget.h"

#include <QtWidgets>

PPUViewer::PPUViewer()
{
  m_RenderWidget = new RenderWidget;

  QGridLayout* mainLayout = new QGridLayout;
  mainLayout->addWidget(m_RenderWidget, 0, 0, 1, 4);
  setLayout(mainLayout);

  setWindowTitle(tr("PPUViewer"));

  m_ZoomInButton = new QPushButton("Zoom In");
  m_ZoomInButton->setObjectName(QStringLiteral("ZoomInButton"));
  mainLayout->addWidget(m_ZoomInButton);
  connect(m_ZoomInButton, SIGNAL(pressed()), m_RenderWidget, SLOT(zoomIn()));

  m_ZoomOutButton = new QPushButton("Zoom Out");
  m_ZoomOutButton->setObjectName(QStringLiteral("ZoomOutButton"));
  mainLayout->addWidget(m_ZoomOutButton);
  connect(m_ZoomOutButton, SIGNAL(pressed()), m_RenderWidget, SLOT(zoomOut()));

  m_RotateButton_Yaxis = new QPushButton("Rotate_Yaxis");
  m_RotateButton_Yaxis->setObjectName(QStringLiteral("RotateButton"));
  mainLayout->addWidget(m_RotateButton_Yaxis);
  connect(m_RotateButton_Yaxis, SIGNAL(pressed()), m_RenderWidget, SLOT(rotateAboutY()));

  m_RotateButton_Xaxis = new QPushButton("Rotate_Xaxis");
  m_RotateButton_Xaxis->setObjectName(QStringLiteral("RotateButton_Xaxis"));
  mainLayout->addWidget(m_RotateButton_Xaxis);
  connect(m_RotateButton_Xaxis, SIGNAL(pressed()), m_RenderWidget, SLOT(rotateAboutX()));

}
