
/*
 * sophia database
 * sphia.org
 *
 * Copyright (c) Dmitry Simonenko
 * BSD License
*/

#include <libss.h>

void ss_sleep(uint64_t ns)
{
	struct timespec ts;
	ts.tv_sec  = 0;
	ts.tv_nsec = ns;
	nanosleep(&ts, NULL);
}

uint64_t ss_utime(void)
{
	struct timeval t;
	gettimeofday(&t, NULL);
	return t.tv_sec * 1000000ULL + t.tv_usec;
}
