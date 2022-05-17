search and delete this:

#ifdef SPHERELIB_STRICT
		if (sphere->IS_SPHERE)
			puts("CCullingManager::RayTraceCallback");
#endif	

search and delete this:

#ifdef SPHERELIB_STRICT
		if (sphere->IS_SPHERE)
			puts("CCullingManager::VisibilityCallback");
#endif

search and delete this:

#ifdef SPHERELIB_STRICT
		if (sphere->IS_SPHERE)
			puts("CCullingManager::RangeTestCallback");
#endif