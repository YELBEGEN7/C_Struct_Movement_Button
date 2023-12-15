#include <stdio.h>
#include <stdlib.h>

struct POINT{
	int x;
	int y;
};

int main(){
	int x,y;
	printf("x konumu=");
	x=getche();
	printf("\ny konumu=");
	y=getche();
	struct POINT *p;
	p=(struct POINT *)malloc(sizeof(struct POINT));
	p->x;
    p->y;
    printf("\nx=%d\ny=%d",p->x,p->y);
    free(p);
	return 0;
}
