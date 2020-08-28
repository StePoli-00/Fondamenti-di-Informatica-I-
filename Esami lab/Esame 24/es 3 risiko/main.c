#include "risiko.h"
int main(void)
{
	char da =3;
	struct lancio att = {{1,4},2 };
	struct lancio diff ={{1, 1, 3, }, 3};
	char persi_att = 0;
	char persi_diff = 0;
	confronta_lanci_ord(&att, &diff, &persi_att, &persi_diff);





}


