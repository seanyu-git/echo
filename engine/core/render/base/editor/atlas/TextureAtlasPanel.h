#pragma once

#include "engine/core/util/Array.hpp"
#include "engine/core/editor/bottom_panel_tab.h"
#include "../../TextureAtlas.h"

#ifdef ECHO_EDITOR_MODE

namespace Echo
{
	class TextureAtlasPanel : public BottomPanelTab
	{
		typedef vector<QGraphicsItem*>::type QGraphicsItemArray;
		typedef vector<QGraphicsProxyWidget*>::type QGraphicsWidgetArray;

	public:
		TextureAtlasPanel(Object* obj);
		virtual ~TextureAtlasPanel();

		// update
		void update();

	public:
		// import
		void onImport();
		void onImportFromImages();

		// split
		void onSplit();
		void onSelectItem();

		// refresh list
		void refreshUiDisplay();
		void refreshAtlaList();
		void refreshImageDisplay();

		// clear
		void clearImageItemAndBorder();

	protected:
		TextureAtlas*				m_textureAtlas;
		QWidget*					m_importMenu = nullptr;
		QObject*					m_graphicsScene;
		QGraphicsItem*				m_imageItem = nullptr;
		QGraphicsItem*				m_imageBorder = nullptr;
		QGraphicsItem*				m_atlaBorder = nullptr;
	};
}

#endif