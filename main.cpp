#include <QResource>
#include <CL/cl.h>
#include <iostream>
#include <sstream>

#define NWITEMS 512

void printErrorOfGetPlatformIDs (const cl_int &err_code)
{
    std::cerr << "Get number of platforms error code: ";
    switch (err_code) {
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorOfGetDeviceIDs (const cl_int &err_code)
{
    std::cerr << "Get number of devices for platform error code: ";
    switch (err_code) {
    case CL_INVALID_PLATFORM:
        std::cerr << "CL_INVALID_PLATFORM\n";
        break;
    case CL_INVALID_DEVICE_TYPE:
        std::cerr << "CL_INVALID_DEVICE_TYPE\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_DEVICE_NOT_FOUND:
        std::cerr << "CL_DEVICE_NOT_FOUND\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorOfCreateContext (const cl_int &err_code)
{
    std::cerr << "Create context error code: ";
    switch (err_code) {
    case CL_INVALID_PLATFORM:
        std::cerr << "CL_INVALID_PLATFORM\n";
        break;
    case CL_INVALID_PROPERTY:
        std::cerr << "CL_INVALID_PROPERTY\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_INVALID_DEVICE:
        std::cerr << "CL_INVALID_DEVICE\n";
        break;
    case CL_DEVICE_NOT_AVAILABLE:
        std::cerr << "CL_DEVICE_NOT_AVAILABLE\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorOfCreateQueue (const cl_int &err_code)
{
    std::cerr << "Create command queue error code: ";
    switch (err_code) {
    case CL_INVALID_CONTEXT:
        std::cerr << "CL_INVALID_CONTEXT\n";
        break;
    case CL_INVALID_DEVICE:
        std::cerr << "CL_INVALID_DEVICE\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_INVALID_QUEUE_PROPERTIES:
        std::cerr << "CL_INVALID_QUEUE_PROPERTIES\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorOfCreateProgram (const cl_int &err_code)
{
    std::cerr << "Load OpenCL source error code: ";
    switch (err_code) {
    case CL_INVALID_CONTEXT:
        std::cerr << "CL_INVALID_CONTEXT\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorOfBuildProgram (const cl_int &err_code)
{
    std::cerr << "Build program error code: ";
    switch (err_code) {
    case CL_INVALID_PROGRAM:
        std::cerr << "CL_INVALID_PROGRAM\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_INVALID_DEVICE:
        std::cerr << "CL_INVALID_DEVICE\n";
        break;
    case CL_INVALID_BINARY:
        std::cerr << "CL_INVALID_BINARY\n";
        break;
    case CL_INVALID_BUILD_OPTIONS:
        std::cerr << "CL_INVALID_BUILD_OPTIONS\n";
        break;
    case CL_INVALID_OPERATION:
        std::cerr << "CL_INVALID_OPERATION\n";
        break;
    case CL_COMPILER_NOT_AVAILABLE:
        std::cerr << "CL_COMPILER_NOT_AVAILABLE\n";
        break;
    case CL_BUILD_PROGRAM_FAILURE:
        std::cerr << "CL_BUILD_PROGRAM_FAILURE\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorOfCreateKernel (const cl_int &err_code)
{
    std::cerr << "Create kernel error code: ";
    switch (err_code) {
    case CL_INVALID_PROGRAM:
        std::cerr << "CL_INVALID_PROGRAM\n";
        break;
    case CL_INVALID_PROGRAM_EXECUTABLE:
        std::cerr << "CL_INVALID_PROGRAM_EXECUTABLE\n";
        break;
    case CL_INVALID_KERNEL_NAME:
        std::cerr << "CL_INVALID_KERNEL_NAME\n";
        break;
    case CL_INVALID_KERNEL_DEFINITION:
        std::cerr << "CL_INVALID_KERNEL_DEFINITION\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorOfCreateBuffer (const cl_int &err_code)
{
    std::cerr << "Create read/write buffer error code: ";
    switch (err_code) {
    case CL_INVALID_CONTEXT:
        std::cerr << "CL_INVALID_CONTEXT\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_INVALID_BUFFER_SIZE:
        std::cerr << "CL_INVALID_BUFFER_SIZE\n";
        break;
    case CL_INVALID_HOST_PTR:
        std::cerr << "CL_INVALID_HOST_PTR\n";
        break;
    case CL_MEM_OBJECT_ALLOCATION_FAILURE:
        std::cerr << "CL_MEM_OBJECT_ALLOCATION_FAILURE\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorOfSetKernelArg (const cl_int &err_code)
{
    std::cerr << "Set kernel argument error code: ";
    switch (err_code) {
    case CL_INVALID_KERNEL:
        std::cerr << "CL_INVALID_KERNEL\n";
        break;
    case CL_INVALID_ARG_INDEX:
        std::cerr << "CL_INVALID_ARG_INDEX\n";
        break;
    case CL_INVALID_ARG_VALUE:
        std::cerr << "CL_INVALID_ARG_VALUE\n";
        break;
    case CL_INVALID_MEM_OBJECT:
        std::cerr << "CL_INVALID_MEM_OBJECT\n";
        break;
    case CL_INVALID_SAMPLER:
        std::cerr << "CL_INVALID_SAMPLER\n";
        break;
    case CL_INVALID_ARG_SIZE:
        std::cerr << "CL_INVALID_ARG_SIZE\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorEnqueueKernel (const cl_int &err_code)
{
    std::cerr << "Enqueues command to execute error code: ";
    switch (err_code) {
    case CL_INVALID_PROGRAM_EXECUTABLE:
        std::cerr << "CL_INVALID_PROGRAM_EXECUTABLE\n";
        break;
    case CL_INVALID_COMMAND_QUEUE:
        std::cerr << "CL_INVALID_COMMAND_QUEUE\n";
        break;
    case CL_INVALID_KERNEL:
        std::cerr << "CL_INVALID_KERNEL\n";
        break;
    case CL_INVALID_CONTEXT:
        std::cerr << "CL_INVALID_CONTEXT\n";
        break;
    case CL_INVALID_KERNEL_ARGS:
        std::cerr << "CL_INVALID_KERNEL_ARGS\n";
        break;
    case CL_INVALID_WORK_DIMENSION:
        std::cerr << "CL_INVALID_WORK_DIMENSION\n";
        break;
    case CL_INVALID_GLOBAL_WORK_SIZE:
        std::cerr << "CL_INVALID_GLOBAL_WORK_SIZE\n";
        break;
    case CL_INVALID_GLOBAL_OFFSET:
        std::cerr << "CL_INVALID_GLOBAL_OFFSET\n";
        break;
    case CL_INVALID_WORK_GROUP_SIZE:
        std::cerr << "CL_INVALID_WORK_GROUP_SIZE\n";
        break;
    case CL_INVALID_WORK_ITEM_SIZE:
        std::cerr << "CL_INVALID_WORK_ITEM_SIZE\n";
        break;
    case CL_MISALIGNED_SUB_BUFFER_OFFSET:
        std::cerr << "CL_MISALIGNED_SUB_BUFFER_OFFSET\n";
        break;
    case CL_INVALID_IMAGE_SIZE:
        std::cerr << "CL_INVALID_IMAGE_SIZE\n";
        break;
    case CL_IMAGE_FORMAT_NOT_SUPPORTED:
        std::cerr << "CL_IMAGE_FORMAT_NOT_SUPPORTED\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_MEM_OBJECT_ALLOCATION_FAILURE:
        std::cerr << "CL_MEM_OBJECT_ALLOCATION_FAILURE\n";
        break;
    case CL_INVALID_EVENT_WAIT_LIST:
        std::cerr << "CL_INVALID_EVENT_WAIT_LIST\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorFinish (const cl_int &err_code)
{
    std::cerr << "Wait until queue commands have been completed error code: ";
    switch (err_code) {
    case CL_INVALID_COMMAND_QUEUE:
        std::cerr << "CL_INVALID_COMMAND_QUEUE\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printErrorEnqueueMapBuffer (const cl_int &err_code)
{
    std::cerr << "Map region of buffer into host error code: ";
    switch (err_code) {
    case CL_INVALID_COMMAND_QUEUE:
        std::cerr << "CL_INVALID_COMMAND_QUEUE\n";
        break;
    case CL_INVALID_CONTEXT:
        std::cerr << "CL_INVALID_CONTEXT\n";
        break;
    case CL_INVALID_MEM_OBJECT:
        std::cerr << "CL_INVALID_MEM_OBJECT\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
        break;
    case CL_INVALID_EVENT_WAIT_LIST:
        std::cerr << "CL_INVALID_EVENT_WAIT_LIST\n";
        break;
    case CL_MISALIGNED_SUB_BUFFER_OFFSET:
        std::cerr << "CL_MISALIGNED_SUB_BUFFER_OFFSET\n";
        break;
    case CL_MAP_FAILURE:
        std::cerr << "CL_MAP_FAILURE\n";
        break;
    case CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST:
        std::cerr << "CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST\n";
        break;
    case CL_MEM_OBJECT_ALLOCATION_FAILURE:
        std::cerr << "CL_MEM_OBJECT_ALLOCATION_FAILURE\n";
        break;
    case CL_INVALID_OPERATION:
        std::cerr << "CL_INVALID_OPERATION\n";
        break;
    case CL_OUT_OF_RESOURCES:
        std::cerr << "CL_OUT_OF_RESOURCES\n";
        break;
    case CL_OUT_OF_HOST_MEMORY:
        std::cerr << "CL_OUT_OF_HOST_MEMORY\n";
        break;
    }
}

void printDeviceInfo (const cl_device_id &device)
{
    //Get all device info with clGetDeviceInfo func (37 page in API Reference)
}

void CL_CALLBACK printOpenCLErrorCallback (const char* errinfo, const void* private_info, size_t cb, void* user_data)
{
    std::ostringstream buf;
    buf << errinfo << "\n";
    std::cerr << buf;
}

int main(int argc, char* argv[])
{
    cl_int err_code;

    //Get number of platforms
    cl_uint num_platforms;
    err_code = clGetPlatformIDs(0, NULL, &num_platforms);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetPlatformIDs(err_code);
        return err_code;
    }

    //Get all exist platforms
    cl_platform_id platform[num_platforms];
    err_code = clGetPlatformIDs(num_platforms, platform, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetPlatformIDs(err_code);
        return err_code;
    }

    for (cl_uint i = 0; i < num_platforms; i++) {
        //Get number of devices for platform
        cl_uint num_devices;
        err_code = clGetDeviceIDs(platform[i], CL_DEVICE_TYPE_ALL, 0, NULL, &num_devices);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceIDs(err_code);
            return err_code;
        }

        //Get all exist devices
        cl_device_id device[num_devices];
        err_code = clGetDeviceIDs(platform[i], CL_DEVICE_TYPE_ALL, num_devices, device, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceIDs(err_code);
            return err_code;
        }

        for (cl_uint j = 0; j < num_devices; j++) {
            printDeviceInfo(device[j]);
        }

        //Create context
        cl_context context = clCreateContext(NULL, num_devices, device, printOpenCLErrorCallback, NULL, &err_code);
        if (err_code != CL_SUCCESS) {
            printErrorOfCreateContext(err_code);
            return err_code;
        }

        cl_command_queue queue[num_devices];
        for (cl_uint j = 0; j < num_devices; j++) {
            //Create command queue
            queue[j] = clCreateCommandQueue(context, device[j], 0, &err_code);
            if (err_code != CL_SUCCESS) {
                printErrorOfCreateQueue(err_code);
                for (cl_uint k = 0; k < j; k++)
                    clReleaseCommandQueue(queue[k]);
                clReleaseContext(context);
                return err_code;
            }
        }

        //Load OpenCL source code
        QResource source(":/main.cl");
        const char* sourcePtr = reinterpret_cast<const char*>(source.data());
        const size_t sourceSize = source.size();
        cl_program program = clCreateProgramWithSource(context, 1, &sourcePtr, &sourceSize, &err_code);
        if (err_code != CL_SUCCESS) {
            printErrorOfCreateProgram(err_code);
            for (cl_uint j = 0; j < num_devices; j++)
                clReleaseCommandQueue(queue[j]);
            clReleaseContext(context);
            return err_code;
        }

        //Build program for device with NULL options and callback func
        err_code = clBuildProgram(program, num_devices, device, NULL, NULL, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfBuildProgram(err_code);
            clReleaseProgram(program);
            for (cl_uint j = 0; j < num_devices; j++)
                clReleaseCommandQueue(queue[j]);
            clReleaseContext(context);
            return err_code;
        }

        //Create kernel
        cl_kernel kernel = clCreateKernel(program, "memset", &err_code);
        if (err_code != CL_SUCCESS) {
            printErrorOfCreateKernel(err_code);
            clReleaseProgram(program);
            for (cl_uint j = 0; j < num_devices; j++)
                clReleaseCommandQueue(queue[j]);
            clReleaseContext(context);
            return err_code;
        }

        //Create read/write buffer with items size
        cl_mem buffer = clCreateBuffer(context, CL_MEM_READ_WRITE, NWITEMS * sizeof(cl_uint), NULL, &err_code);
        if (err_code != CL_SUCCESS) {
            printErrorOfCreateBuffer(err_code);
            clReleaseKernel(kernel);
            clReleaseProgram(program);
            for (cl_uint j = 0; j < num_devices; j++)
                clReleaseCommandQueue(queue[j]);
            clReleaseContext(context);
            return err_code;
        }

        //Set first kernel function argument
        err_code = clSetKernelArg(kernel, 0, sizeof(buffer), reinterpret_cast<void*>(&buffer));
        if (err_code != CL_SUCCESS) {
            printErrorOfSetKernelArg(err_code);
            clReleaseKernel(kernel);
            clReleaseProgram(program);
            for (cl_uint j = 0; j < num_devices; j++)
                clReleaseCommandQueue(queue[j]);
            clReleaseContext(context);
            return err_code;
        }

        for (cl_uint j = 0; j < num_devices; j++) {
            //Enqueues command to execute kernel on device
            size_t global_work_size = NWITEMS;
            err_code = clEnqueueNDRangeKernel(queue[j], kernel, 1, NULL, &global_work_size, NULL, 0, NULL, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorEnqueueKernel(err_code);
                continue;
            }

            //Wait until queue commands have been completed
            err_code = clFinish(queue[j]);
            if (err_code != CL_SUCCESS) {
                printErrorFinish(err_code);
                continue;
            }

            //Map region of buffer into host
            cl_uint* resultPtr;
            resultPtr = reinterpret_cast<cl_uint*>(clEnqueueMapBuffer(queue[j], buffer, CL_TRUE, CL_MAP_READ, 0, sizeof(cl_uint) * NWITEMS, 0, NULL, NULL, &err_code));
            if (err_code != CL_SUCCESS) {
                printErrorEnqueueMapBuffer(err_code);
                continue;
            }

            for (int k = 0; k < NWITEMS; k++)
                std::cout << i << " " << j << " " << k << " " << resultPtr[k] << "\n";
        }

        clReleaseKernel(kernel);
        clReleaseProgram(program);
        for (cl_uint j = 0; j < num_devices; j++)
            clReleaseCommandQueue(queue[j]);
        clReleaseContext(context);
    }

    return 0;
}
