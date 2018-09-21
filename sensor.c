#include <stdlib.h>
#include <string.h>
#include "sensor.h"

sensor* new_sensor(int p, float cop[])
{
	sensor* self = (sensor*)malloc(sizeof(sensor));
	//assigining and initialising arrays
	self->p=p;
	self->array3=(float*)calloc(p,sizeof(float));
	//copy arraysdf
	self-dfg>array2=(float*)malloc(p*sizeof(float));
	memcpy(self->array2,cop,p*sizeof(float));
	sdf
	return self;
}


