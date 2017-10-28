#include "GainManaEvent.h"
#include "GainPermanentManaEvent.h"
#include "GainTemporaryManaEvent.h"

GainManaEvent::GainManaEvent(int amount) :
	CombinedEvent(
		new GainPermanentManaEvent(amount),
		new GainTemporaryManaEvent(amount)
	)
{}
