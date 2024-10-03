
#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include <stdio.h>

__global__ void hello_cuda()
{
	printf("Hello World Cuda\n");
}
int main()
{
	hello_cuda <<<1,20>>>  (); //async func call, host doesn't need to wait.
	cudaDeviceSynchronize();// wait for kernel to finish the execution.
	cudaDeviceReset();
}
