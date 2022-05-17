search and delete this:

#ifdef __HEIGHT_CACHE_TRACE__
	static DWORD s_dwTotalCount=0;
	static DWORD s_dwHitCount=0;
	static DWORD s_dwErrorCount=0;

	s_dwTotalCount++;
#endif


search and delete this:

#ifdef __HEIGHT_CACHE_TRACE__
				s_dwHitCount++;
				
				if (s_dwTotalCount>1000)
				{
					DWORD dwHitRate=s_dwHitCount*1000/s_dwTotalCount;
					static DWORD s_dwMaxHitRate=0;
					if (s_dwMaxHitRate<dwHitRate)
					{
						s_dwMaxHitRate=dwHitRate;
						printf("HitRate %f\n", s_dwMaxHitRate*0.1f);
					}


				}			
#endif


search and delete this:

#ifdef __HEIGHT_CACHE_TRACE__
		s_dwErrorCount++;
		//printf("NoCache (%f, %f)\n", fx/100.0f, fy/100.0f);
#endif

search and delete this:

#ifdef __HEIGHT_CACHE_TRACE__	
	if (s_dwTotalCount>=1000000)
	{
		printf("HitRate %f\n", s_dwHitCount*1000/s_dwTotalCount*0.1f);
		printf("ErrRate %f\n", s_dwErrorCount*1000/s_dwTotalCount*0.1f);
		s_dwHitCount=0;
		s_dwTotalCount=0;
		s_dwErrorCount=0;
	}
#endif

search and delete this:

#ifdef __HEIGHT_CACHE_TRACE__
			printf("ClearCacheHeight[%d]\n", dwKey%SHeightCache::HASH_SIZE);
#endif