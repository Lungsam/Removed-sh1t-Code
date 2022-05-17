search and delete this:

#ifdef SPHERELIB_STRICT
		if (!sphere->IS_SPHERE)
			puts("SpherePack::Render");
#endif

search and delete this:

#ifdef SPHERELIB_STRICT
		if (!pack->IS_SPHERE)
			puts("SpherePackFactory::Remove");
#endif

search and delete this:

#ifdef SPHERELIB_STRICT
		if (!nearest1->IS_SPHERE)
			puts("SpherePackFactory::Integrate1");
#endif

search and delete this:

#ifdef SPHERELIB_STRICT
				if (!nearest2->IS_SPHERE)
					puts("SpherePackFactory::Integrate2");
#endif


search and change:

#ifdef SPHERELIB_STRICT
	mRoot->PointTest2d(center, this,VS_PARTIAL);
	extern bool MAPOUTDOOR_GET_HEIGHT_TRACE;
	if (MAPOUTDOOR_GET_HEIGHT_TRACE)
		puts("================================================");
#else
	mRoot->PointTest2d(center, this,VS_PARTIAL);
	
#endif

change to

	mRoot->PointTest2d(center, this,VS_PARTIAL);
	
search and delete this:

#ifdef SPHERELIB_STRICT
		extern bool MAPOUTDOOR_GET_HEIGHT_TRACE;
		if (MAPOUTDOOR_GET_HEIGHT_TRACE)
		{
			float dx=p.x-mCenter.x;
			float dy=p.y-mCenter.y;
			float distSquare = (dx*dx)+(dy*dy);
			printf("--- (%f, %f) dist %f radius %f isSphere %d\n", mCenter.x, mCenter.y, distSquare, GetRadius(), IS_SPHERE);
		}
#endif

search and delete this:

#ifdef SPHERELIB_STRICT
	if (!sphere->IS_SPHERE)
		puts("SpherePackFactory::RangeTestCallback");
#endif

search and delete this:

#ifdef SPHERELIB_STRICT
	if (!sphere->IS_SPHERE)
		puts("SpherePackFactory::PointTest2dCallback");
#endif

search and delete this:

#ifdef SPHERELIB_STRICT
	if (!sphere->IS_SPHERE)
		puts("SpherePackFactory::RayTraceCallback");
#endif

search and delete this:

#ifdef SPHERELIB_STRICT
	if (!sphere->IS_SPHERE)
		puts("SpherePackFactory::VisibilityCallback");
#endif