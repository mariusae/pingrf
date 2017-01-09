/*

This file is distributred under the Lucent Public License, Version 1.02.
See ../../LUCENT 

Copyright © 2000-2009 Lucent Technologies.  All Rights Reserved.
Portions Copyright © 2001-2008 Russ Cox
Portions Copyright © 2008-2009 Google Inc.
*/

#define zonetinfo _p9zonetinfo
#define zonedump _p9zonedump
#define zonelookuptinfo _p9zonelookuptinfo

typedef long tlong;

typedef
struct Tinfo
{
	long	t;
	int	tzoff;
	int	dlflag;
	char	*zone;
} Tinfo;

extern	int	zonelookuptinfo(Tinfo*, tlong);
extern	int	zonetinfo(Tinfo*, int);
extern	void	zonedump(int fd);

