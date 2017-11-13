#include "PlayerEvent.h"
#include "../Board.h"

void PlayerEvent::set_board(Board *board) {
	Event::set_board(board);
	set_player(&board->get_cur_player());
}

void PlayerEvent::set_player(Player *player) {
	PlayerEvent::player = player;
}
