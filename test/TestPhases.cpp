#include <gtest/gtest.h>
#include <Board.h>
#include <Player.h>
#include <event/phase/StartTurnPhase.h>

TEST(StartTurnPhase, SwitchPlayer) {
	Board board;
	Player *prev_opp = &board.get_cur_opp();
	board.start_event<StartTurnPhase>();
	EXPECT_EQ(prev_opp, &board.get_cur_player());
}

TEST(StartTurnPhase, RefreshMana) {
	Board board;
	board.get_cur_opp().gain_perm_mana(6);
	board.start_event<StartTurnPhase>();
	EXPECT_EQ(board.get_cur_player().get_temp_mana(), 6);
}