#include <algorithm>
#include "GainPermanentMana.h"

void GainPermanentMana::occur(Player &player) {
	player.permanent_mana = std::min(
		player.permanent_mana + amount,
		PERMANENT_MANA_LIMIT
	);
}

GainPermanentMana::GainPermanentMana(int amount) :
	amount(amount)
{}
