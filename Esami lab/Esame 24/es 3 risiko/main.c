#include "risiko.h"
int main(void)
{
	char a[3] = { '5','4','3' };
	char d[3] = { '6','3','1' };
	char da = 0;
	struct lancio att = { *a,da };
	struct lancio diff = { *d,da };
	char persi_att = 0;
	char persi_diff = 0;
	confronta_lanci_ord(&att, &diff, &persi_att, &persi_diff);





}


