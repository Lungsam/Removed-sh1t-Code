search and delete:

#ifndef __WIN32__
	#include "limit_time.h"
#endif

search and delete:

#ifdef ENABLE_LIMIT_TIME
	if (!CCheckServer::Instance().IsValid())
	{
		exit(0);
		return;
	}
#endif