#include "../anim_player.h"

namespace Echo
{
#ifdef ECHO_EDITOR_MODE
	// get camera2d icon, used for editor
	const char* AnimPlayer::getEditorIcon() const
	{
		return "engine/modules/anim/editor/icon/animplayer.png";
	}
#endif
}