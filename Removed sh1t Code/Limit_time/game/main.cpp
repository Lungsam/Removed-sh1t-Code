search and delete:

#ifndef __WIN32__
	#include "limit_time.h"
#endif

search and delete:

#ifdef ENABLE_LIMIT_TIME
		if ((unsigned)get_global_time() >= GLOBAL_LIMIT_TIME)
		{
			sys_err("Server life time expired.");
			g_bShutdown = true;
		}
#endif

search and delete:

#ifdef ENABLE_LIMIT_TIME
	if ((unsigned)get_global_time() >= GLOBAL_LIMIT_TIME)
	{
		sys_err("Server life time expired.");
		return 0;
	}
#endif