#ifndef OPENHS_COMBINEDEVENT_H
#define OPENHS_COMBINEDEVENT_H


#include "Event.h"
#include <memory>

class CombinedEvent : public virtual Event {
public:
	// Note! Will remove both events on destruction
	CombinedEvent(
		Event *first,
		Event *second
	);

	~CombinedEvent() override;

	void set_board(Board *board) override;

private:
	void act() override;

	Event *first, *second;
};


#endif //OPENHS_COMBINEDEVENT_H
