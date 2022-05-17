find and delete:

//#define COUNT_SHOWING_SPHERE

#ifdef COUNT_SHOWING_SPHERE
int showingcount = 0;
#endif

find and delete:

#ifdef COUNT_SHOWING_SPHERE
		if (pInstance->isShow())
		{
			Tracef("SH : %p  ",sphere->GetUserData());
			showingcount--;
			Tracef("show size : %5d\n",showingcount);
		}

#endif

find and delete:

#ifdef COUNT_SHOWING_SPHERE
		if (!pInstance->isShow())
		{
			Tracef("HS : %p  ",sphere->GetUserData());
			showingcount++;
			Tracef("show size : %5d\n",showingcount);
		}
#endif

find and delete:


#ifdef COUNT_SHOWING_SPHERE
	Tracef("CR : %p  ",obj);
	showingcount++;
	Tracef("show size : %5d\n",showingcount);
#endif

find and delete:

#ifdef COUNT_SHOWING_SPHERE
	if (((CGraphicObjectInstance*)h->GetUserData())->isShow())
	{
		Tracef("DE : %p  ",h->GetUserData());
		showingcount--;
		Tracef("show size : %5d\n",showingcount);
	}
#endif