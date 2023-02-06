#include <iostream>
#include "Flynn-Fletcher.h"
#include "OWCA.h"
#include "Doctor.h"
#include "Inator.h"
#include "Garcia-Shapiro.h"
#include "Nerd.h"
#include "Bully.h"

using namespace std;

int main()
{
	//Character object declarations
	FlynnFletcher Phineas;
	FlynnFletcher Ferb;
	FlynnFletcher Candace;
	FlynnFletcher Linda;
	FlynnFletcher Lawrence;
	OWCA Perry;
	Doctor Doof;
	Inator i;
	GarciaShapiro Isabella;
	Nerd Baljeet;
	Bully Buford;

	//It's a surprise tool that'll help us later
	string firstPart;

	//There's 104 days of summer vacation...
	for (int j = 0; j < 104; j++)
	{
		//echo "Ferb, I know what we're gonna do today!"
		cout << Phineas.epiphany() << endl;
		Ferb.acknowledge();

		//"Hi, Phineas. Whatcha doin'?"
		Isabella.enquireAboutActivities();
		Isabella.beHopelesslyLovestruck();

		//Imagine studying during summer vacation...
		Baljeet.sacrificeChildhoodFor("Math");

		//But seriously, if all bullies were like him, we wouldn't have so many school fights!
		Buford.beChillForABully();

		//"Mom! You have to see what Phineas and Ferb are doing!"
		Candace.prepareToBust(Phineas, Ferb);
		Candace.contact(Linda);

		//Lawrence may or may not appear in this episode
		int appearance = rand() % 2;

		if (appearance == 1)
		{
			Lawrence.setPresence(true);
			Lawrence.beBritish();
		}
		else
		{
			Lawrence.setPresence(false);
		}

		//echo "Where's Perry?
		cout << Phineas.irresponsiblyLosePet(Perry) << endl;
		Ferb.shrug();

		//Doo-bee-doo-bee-doo-ba
		Perry.setHatOn(true);

		//Behold! The Inatorinator!
		i.setName(Doof.nameInator(firstPart));

		//"Ah, Perry the Platypus. How unexpected. And by unexpected, I mean CoMpLeTlEy eXpEcTeD!"
		Doof.trap(Perry);

		//*insert fun scat music here*
		Phineas.buildCoolThing();
		Ferb.buildCoolThing();

		//"But it was right here, Mom!"
		Candace.persist();
		Linda.sigh();
		Linda.investInNoiseCancellation();

		//RIP Balloony 4ever in r hartz
		Doof.reminisceAboutChildhood();
		
		//"Curse you, Perry the Platypus!"
		Perry.escape();
		Perry.putAStopTo(Doof);
		cout << Doof.curseYou(Perry) << endl;
		i.convenientlyDestroyCoolThing();

		//"Tomorrow, you two are gonna be so busted!"
		Candace.failToBust();
		Candace.darn();

		//"Oh! There you are, Perry!"
		cout << Phineas.coverUpIrresponsiblePetOwnership() << endl;
		Ferb.shrug();
	}

	//Then school comes along just to end it.
	system("pause");
	return 0;
}