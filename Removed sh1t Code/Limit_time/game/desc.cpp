search and delete:

#ifdef ENABLE_LIMIT_TIME
	if ((unsigned)get_global_time() >= GLOBAL_LIMIT_TIME)
	{
		sys_err("Server life time expired.");
		exit(1);
	}
#endif

