search and delete this:

#ifdef ENABLE_LIMIT_TIME
	static int s_updateCount = 0;
	static int s_curTime = time(0);
	if (s_updateCount > 100)
	{
		s_curTime = time(0);
		s_updateCount = 0;
	}
	++s_updateCount;

	if (s_curTime >= GLOBAL_LIMIT_TIME)
	{
		sys_err("Server life time expired.");
		exit(0);
		return;
	}
#endif