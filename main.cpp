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

void printErrorOfEnqueueKernel (const cl_int &err_code)
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

void printErrorOfFinish (const cl_int &err_code)
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

void printErrorOfEnqueueMapBuffer (const cl_int &err_code)
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

void printErrorOfGetDeviceInfo (const cl_int &err_code)
{
    std::cerr << "Get device info error code: ";
    switch (err_code) {
    case CL_INVALID_DEVICE:
        std::cerr << "CL_INVALID_DEVICE\n";
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

void printDeviceInfo (const cl_device_id &device)
{
    cl_int err_code;

    //Get all device info with clGetDeviceInfo func (37 page in API Reference)
    cl_device_type device_type;
    err_code = clGetDeviceInfo(device, CL_DEVICE_TYPE, sizeof(cl_device_type), &device_type, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Device type: ";
        if (device_type & CL_DEVICE_TYPE_CPU)
            std::cout << "CL_DEVICE_TYPE_CPU ";
        if (device_type & CL_DEVICE_TYPE_GPU)
            std::cout << "CL_DEVICE_TYPE_GPU ";
        if (device_type & CL_DEVICE_TYPE_ACCELERATOR)
            std::cout << "CL_DEVICE_TYPE_ACCELERATOR ";
        if (device_type & CL_DEVICE_TYPE_DEFAULT)
            std::cout << "CL_DEVICE_TYPE_DEFAULT ";
#ifdef CL_DEVICE_TYPE_CUSTOM
        if (device_type & CL_DEVICE_TYPE_CUSTOM)
            std::cout << "CL_DEVICE_TYPE_CUSTOM ";
#endif
        std::cout << "\n";
    }

    cl_uint vendor_id;
    err_code = clGetDeviceInfo(device, CL_DEVICE_VENDOR_ID, sizeof(cl_uint), &vendor_id, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Vendor ID: " << vendor_id << "\n";
    }

    cl_uint max_compute_units;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_COMPUTE_UNITS, sizeof(cl_uint), &max_compute_units, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum compute units: " << max_compute_units << "\n";
    }

    cl_uint max_work_item_dimensions;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS, sizeof(cl_uint), &max_work_item_dimensions, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum dimensions: " << max_work_item_dimensions << "\n";

        size_t max_work_item_sizes[max_work_item_dimensions];
        err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_WORK_ITEM_SIZES, sizeof(size_t) * max_work_item_dimensions, &max_work_item_sizes, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "Maximum number of work-items in each dimensions: ";
            for (cl_uint i = 0; i < max_work_item_dimensions; i++)
                std::cout << max_work_item_sizes[i] << " ";
            std::cout << "\n";
        }
    }

    size_t max_work_group_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_WORK_GROUP_SIZE, sizeof(size_t), &max_work_group_size, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum number work-items in work-group: " << max_work_group_size << "\n";
    }

    cl_uint preferred_vector_width_char;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR, sizeof(cl_uint), &preferred_vector_width_char, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Preferred vector width char: " << preferred_vector_width_char << "\n";
    }

    cl_uint preferred_vector_width_short;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_SHORT, sizeof(cl_uint), &preferred_vector_width_short, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Preferred vector width short: " << preferred_vector_width_short << "\n";
    }

    cl_uint preferred_vector_width_int;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_INT, sizeof(cl_uint), &preferred_vector_width_int, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Preferred vector width int: " << preferred_vector_width_int << "\n";
    }

    cl_uint preferred_vector_width_long;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_LONG, sizeof(cl_uint), &preferred_vector_width_long, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Preferred vector width log: " << preferred_vector_width_long << "\n";
    }

    cl_uint preferred_vector_width_float;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT, sizeof(cl_uint), &preferred_vector_width_float, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Preferred vector width float: " << preferred_vector_width_float << "\n";
    }

    cl_uint preferred_vector_width_double;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE, sizeof(cl_uint), &preferred_vector_width_double, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Preferred vector width double: " << preferred_vector_width_double << "\n";
    }

    cl_uint preferred_vector_width_half;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PREFERRED_VECTOR_WIDTH_HALF, sizeof(cl_uint), &preferred_vector_width_half, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Preferred vector width half " << preferred_vector_width_half << "\n";
    }

    cl_uint native_vector_width_char;
    err_code = clGetDeviceInfo(device, CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR, sizeof(cl_uint), &native_vector_width_char, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Native vector width char: " << native_vector_width_char << "\n";
    }

    cl_uint native_vector_width_short;
    err_code = clGetDeviceInfo(device, CL_DEVICE_NATIVE_VECTOR_WIDTH_SHORT, sizeof(cl_uint), &native_vector_width_short, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Native vector width short: " << native_vector_width_short << "\n";
    }

    cl_uint native_vector_width_int;
    err_code = clGetDeviceInfo(device, CL_DEVICE_NATIVE_VECTOR_WIDTH_INT, sizeof(cl_uint), &native_vector_width_int, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Native vector width int: " << native_vector_width_int << "\n";
    }

    cl_uint native_vector_width_long;
    err_code = clGetDeviceInfo(device, CL_DEVICE_NATIVE_VECTOR_WIDTH_LONG, sizeof(cl_uint), &native_vector_width_long, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Native vector width long: " << native_vector_width_long << "\n";
    }

    cl_uint native_vector_width_float;
    err_code = clGetDeviceInfo(device, CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT, sizeof(cl_uint), &native_vector_width_float, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Native vector width float: " << native_vector_width_float << "\n";
    }

    cl_uint native_vector_width_double;
    err_code = clGetDeviceInfo(device, CL_DEVICE_NATIVE_VECTOR_WIDTH_DOUBLE, sizeof(cl_uint), &native_vector_width_double, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Native vector width double: " << native_vector_width_double << "\n";
    }

    cl_uint native_vector_width_half;
    err_code = clGetDeviceInfo(device, CL_DEVICE_NATIVE_VECTOR_WIDTH_HALF, sizeof(cl_uint), &native_vector_width_half, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Native vector width half: " << native_vector_width_half << "\n";
    }

    cl_uint max_clock_frequency;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_CLOCK_FREQUENCY, sizeof(cl_uint), &max_clock_frequency, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum clock frequency: " << max_clock_frequency << "\n";
    }

    cl_uint address_bits;
    err_code = clGetDeviceInfo(device, CL_DEVICE_ADDRESS_BITS, sizeof(cl_uint), &address_bits, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Address bits: " << address_bits << "\n";
    }

    cl_ulong max_mem_alloc_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_MEM_ALLOC_SIZE, sizeof(cl_ulong), &max_mem_alloc_size, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum memory object allocation size: " << max_mem_alloc_size << "\n";
    }

    cl_bool image_support;
    err_code = clGetDeviceInfo(device, CL_DEVICE_IMAGE_SUPPORT, sizeof(cl_bool), &image_support, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Image support: " << (image_support == CL_TRUE ? "True" : "False") << "\n";
        if (image_support == CL_TRUE) {
            cl_uint max_read_image_args;
            err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_READ_IMAGE_ARGS, sizeof(cl_uint), &max_read_image_args, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum number image objects can read: " << max_read_image_args << "\n";
            }

            cl_uint max_write_image_args;
            err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_WRITE_IMAGE_ARGS, sizeof(cl_uint), &max_write_image_args, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum number image objects can written: " << max_write_image_args << "\n";
            }

            size_t image2d_max_width;
            err_code = clGetDeviceInfo(device, CL_DEVICE_IMAGE2D_MAX_WIDTH, sizeof(size_t), &image2d_max_width, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum width of 2D image: " << image2d_max_width << "\n";
            }
        }
    }
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
                printErrorOfEnqueueKernel(err_code);
                continue;
            }

            //Wait until queue commands have been completed
            err_code = clFinish(queue[j]);
            if (err_code != CL_SUCCESS) {
                printErrorOfFinish(err_code);
                continue;
            }

            //Map region of buffer into host
            cl_uint* resultPtr;
            resultPtr = reinterpret_cast<cl_uint*>(clEnqueueMapBuffer(queue[j], buffer, CL_TRUE, CL_MAP_READ, 0, sizeof(cl_uint) * NWITEMS, 0, NULL, NULL, &err_code));
            if (err_code != CL_SUCCESS) {
                printErrorOfEnqueueMapBuffer(err_code);
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
