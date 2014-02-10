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
#ifdef CL_VERSION_1_1
    case CL_INVALID_PROPERTY:
        std::cerr << "CL_INVALID_PROPERTY\n";
        break;
#endif
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
#ifdef CL_VERSION_1_1
    case CL_MISALIGNED_SUB_BUFFER_OFFSET:
        std::cerr << "CL_MISALIGNED_SUB_BUFFER_OFFSET\n";
        break;
#endif
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
#ifdef CL_VERSION_1_1
    case CL_MISALIGNED_SUB_BUFFER_OFFSET:
        std::cerr << "CL_MISALIGNED_SUB_BUFFER_OFFSET\n";
        break;
#endif
    case CL_MAP_FAILURE:
        std::cerr << "CL_MAP_FAILURE\n";
        break;
#ifdef CL_VERSION_1_1
    case CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST:
        std::cerr << "CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST\n";
        break;
#endif
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

void printErrorOfGetPlatformInfo (const cl_int &err_code)
{
    std::cerr << "Get platform info error code: ";
    switch (err_code) {
    case CL_INVALID_PLATFORM:
        std::cerr << "CL_INVALID_PLATFORM\n";
        break;
    case CL_INVALID_VALUE:
        std::cerr << "CL_INVALID_VALUE\n";
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
#ifdef CL_VERSION_1_2
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

#ifdef CL_VERSION_1_1
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
#endif

    cl_uint max_clock_frequency;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_CLOCK_FREQUENCY, sizeof(cl_uint), &max_clock_frequency, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum clock frequency in MHz: " << max_clock_frequency << "\n";
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
        std::cout << "Maximum memory object allocation size in bytes: " << max_mem_alloc_size << "\n";
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

            size_t image2d_max_height;
            err_code = clGetDeviceInfo(device, CL_DEVICE_IMAGE2D_MAX_HEIGHT, sizeof(size_t), &image2d_max_height, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum height of 2D image: " << image2d_max_height << "\n";
            }

            size_t image3d_max_width;
            err_code = clGetDeviceInfo(device, CL_DEVICE_IMAGE3D_MAX_WIDTH, sizeof(size_t), &image3d_max_width, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum width of 3D image: " << image3d_max_width << "\n";
            }

            size_t image3d_max_height;
            err_code = clGetDeviceInfo(device, CL_DEVICE_IMAGE3D_MAX_HEIGHT, sizeof(size_t), &image3d_max_height, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum height of 3D image: " << image3d_max_height << "\n";
            }

            size_t image3d_max_depth;
            err_code = clGetDeviceInfo(device, CL_DEVICE_IMAGE3D_MAX_DEPTH, sizeof(size_t), &image3d_max_depth, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum depth of 3D image: " << image3d_max_depth << "\n";
            }

#ifdef CL_VERSION_1_2
            size_t image_max_buffer_size;
            err_code = clGetDeviceInfo(device, CL_DEVICE_IMAGE_MAX_BUFFER_SIZE, sizeof(size_t), &image_max_buffer_size, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum image buffer size in pixels: " << image_max_buffer_size << "\n";
            }

            size_t image_max_array_size;
            err_code = clGetDeviceInfo(device, CL_DEVICE_IMAGE_MAX_ARRAY_SIZE, sizeof(size_t), &image_max_array_size, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum number of images: " << image_max_array_size << "\n";
            }
#endif
            cl_uint max_samplers;
            err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_SAMPLERS, sizeof(cl_uint), &max_samplers, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Maximum number of samplers: " << max_samplers << "\n";
            }
        }
    }

    size_t max_parameter_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_PARAMETER_SIZE, sizeof(size_t), &max_parameter_size, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum size in bytes of arguments for kernel: " << max_parameter_size << "\n";
    }

    cl_uint mem_base_addr_align;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MEM_BASE_ADDR_ALIGN, sizeof(cl_uint), &mem_base_addr_align, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Minimum value is size in bits of largest OpenCL built-in data type supported: " << mem_base_addr_align << "\n";
    }

    cl_device_fp_config single_fp_config;
    err_code = clGetDeviceInfo(device, CL_DEVICE_SINGLE_FP_CONFIG, sizeof(cl_device_fp_config), &single_fp_config, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Single precision floating-point capability: ";
        if (single_fp_config & CL_FP_DENORM)
            std::cout << "CL_FP_DENORM ";
        if (single_fp_config & CL_FP_INF_NAN)
            std::cout << "CL_FP_INF_NAM ";
        if (single_fp_config & CL_FP_ROUND_TO_NEAREST)
            std::cout << "CL_FP_ROUND_TO_NEAREST ";
        if (single_fp_config & CL_FP_ROUND_TO_ZERO)
            std::cout << "CL_FP_ROUND_TO_ZERO ";
        if (single_fp_config & CL_FP_ROUND_TO_INF)
            std::cout << "CL_FP_ROUND_TO_INF ";
        if (single_fp_config & CL_FP_FMA)
            std::cout << "CL_FP_FMA ";
#ifdef CL_VERSION_1_2
        if (single_fp_config & CL_FP_CORRECTLY_ROUNDED_DIVIDE_SQRT)
            std::cout << "CL_FP_CORRECTLY_ROUNDED_DIVIDE_SQRT ";
#endif
#ifdef CL_VERSION_1_1
        if (single_fp_config & CL_FP_SOFT_FLOAT)
            std::cout << "CL_FP_SOFT_FLOAT ";
#endif
        std::cout << "\n";
    }

#ifdef CL_VERSION_1_2
    cl_device_fp_config double_fp_config;
    err_code = clGetDeviceInfo(device, CL_DEVICE_DOUBLE_FP_CONFIG, sizeof(cl_device_fp_config), &double_fp_config, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Double precision floating-point capability: ";
        if (double_fp_config & CL_FP_DENORM)
            std::cout << "CL_FP_DENORM ";
        if (double_fp_config & CL_FP_INF_NAN)
            std::cout << "CL_FP_INF_NAN ";
        if (double_fp_config & CL_FP_ROUND_TO_NEAREST)
            std::cout << "CL_FP_ROUND_TO_NEAREST ";
        if (double_fp_config & CL_FP_ROUND_TO_ZERO)
            std::cout << "CL_FP_ROUND_TO_ZERO ";
        if (double_fp_config & CL_FP_ROUND_TO_INF)
            std::cout << "CL_FP_ROUND_TO_INF ";
        if (double_fp_config & CL_FP_FMA)
            std::cout << "CL_FP_FMA ";
        if (double_fp_config & CL_FP_SOFT_FLOAT)
            std::cout << "CL_FP_SOFT_FLOAT ";
        std::cout << "\n";
    }
#endif

    cl_device_mem_cache_type global_mem_cache_type;
    err_code = clGetDeviceInfo(device, CL_DEVICE_GLOBAL_MEM_CACHE_TYPE, sizeof(cl_device_mem_cache_type), &global_mem_cache_type, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Type of global memory cache supported: ";
        switch (global_mem_cache_type) {
        case CL_NONE:
            std::cout << "CL_NONE\n";
            break;
        case CL_READ_ONLY_CACHE:
            std::cout << "CL_READ_ONLY_CACHE\n";
            break;
        case CL_READ_WRITE_CACHE:
            std::cout << "CL_READ_WRITE_CACHE\n";
            break;
        }
    }

    cl_uint global_mem_cacheline_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_GLOBAL_MEM_CACHELINE_SIZE, sizeof(cl_uint), &global_mem_cacheline_size, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Size of global memory cache line in bytes: " << global_mem_cacheline_size << "\n";
    }

    cl_ulong global_mem_cache_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_GLOBAL_MEM_CACHE_SIZE, sizeof(cl_ulong), &global_mem_cache_size, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Size of global memory cache in bytes: " << global_mem_cache_size << "\n";
    }

    cl_ulong global_mem_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_GLOBAL_MEM_SIZE, sizeof(cl_ulong), &global_mem_size, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Size of global device memory in bytes: " << global_mem_size << "\n";
    }

    cl_uint max_constant_args;
    err_code = clGetDeviceInfo(device, CL_DEVICE_MAX_CONSTANT_ARGS, sizeof(cl_uint), &max_constant_args, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum size in bytes of constant buffer allocation: " << max_constant_args << "\n";
    }

    cl_device_local_mem_type local_mem_type;
    err_code = clGetDeviceInfo(device, CL_DEVICE_LOCAL_MEM_TYPE, sizeof(cl_device_local_mem_type), &local_mem_type, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Type of local memory supported: ";
        switch (local_mem_type) {
        case CL_NONE:
            std::cout << "CL_NONE\n";
            break;
        case CL_LOCAL:
            std::cout << "CL_LOCAL\n";
            break;
        case CL_GLOBAL:
            std::cout << "CL_GLOBAL\n";
            break;
        }
    }

    cl_ulong local_mem_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_LOCAL_MEM_SIZE, sizeof(cl_ulong), &local_mem_size, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Size of local memory arena in bytes: " << local_mem_size << "\n";
    }

    cl_bool error_correction_support;
    err_code = clGetDeviceInfo(device, CL_DEVICE_ERROR_CORRECTION_SUPPORT, sizeof(cl_bool), &error_correction_support, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Error correction support: " << (error_correction_support == CL_TRUE ? "True" : "False") << "\n";
    }

#ifdef CL_VERSION_1_1
    cl_bool host_unified_memory;
    err_code = clGetDeviceInfo(device, CL_DEVICE_HOST_UNIFIED_MEMORY, sizeof(cl_bool), &host_unified_memory, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Device and host have unified memory subsystem: " << (host_unified_memory == CL_TRUE ? "True" : "False") << "\n";
    }
#endif

    size_t profiling_timer_resolution;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PROFILING_TIMER_RESOLUTION, sizeof(size_t), &profiling_timer_resolution, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Profiling timer resolution in nanoseconds: " << profiling_timer_resolution << "\n";
    }

    cl_bool endian_little;
    err_code = clGetDeviceInfo(device, CL_DEVICE_ENDIAN_LITTLE, sizeof(cl_bool), &endian_little, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "OpenCL device is little endian: " << (endian_little == CL_TRUE ? "True" : "False") << "\n";
    }

    cl_bool device_available;
    err_code = clGetDeviceInfo(device, CL_DEVICE_AVAILABLE, sizeof(cl_bool), &device_available, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Device is available: " << (device_available == CL_TRUE ? "True" : "False") << "\n";
    }

    cl_bool compiler_available;
    err_code = clGetDeviceInfo(device, CL_DEVICE_COMPILER_AVAILABLE, sizeof(cl_bool), &compiler_available, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Compiler is available: " << (compiler_available == CL_TRUE ? "True" : "False") << "\n";
    }

#ifdef CL_VERSION_1_2
    cl_bool linker_available;
    err_code = clGetDeviceInfo(device, CL_DEVICE_LINKER_AVAILABLE, sizeof(cl_bool), &linker_available, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Linker is available: " << (linker_available == CL_TRUE ? "True" : "False") << "\n";
    }
#endif

    cl_device_exec_capabilities execution_capabilities;
    err_code = clGetDeviceInfo(device, CL_DEVICE_EXECUTION_CAPABILITIES, sizeof(cl_device_exec_capabilities), &execution_capabilities, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Execution capabilities of device: ";
        if (execution_capabilities & CL_EXEC_KERNEL)
            std::cout << "CL_EXEC_KERNEL ";
        if (execution_capabilities & CL_EXEC_NATIVE_KERNEL)
            std::cout << "CL_EXEC_NATIVE_KERNEL ";
        std::cout << "\n";
    }

    cl_command_queue_properties queue_properties;
    err_code = clGetDeviceInfo(device, CL_DEVICE_QUEUE_PROPERTIES, sizeof(cl_command_queue_properties), &queue_properties, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Command queue properties: ";
        if (queue_properties & CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE)
            std::cout << "CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE ";
        if (queue_properties & CL_QUEUE_PROFILING_ENABLE)
            std::cout << "CL_QUEUE_PROFILING_ENABLE ";
        std::cout << "\n";
    }

#ifdef CL_VERSION_1_2
    size_t built_in_kernels_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_BUILT_IN_KERNELS, 0, NULL, &built_in_kernels_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        char built_in_kernels[built_in_kernels_size];
        err_code = clGetDeviceInfo(device, CL_DEVICE_BUILT_IN_KERNELS, built_in_kernels_size, built_in_kernels, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "Supported built-in kernels: " << built_in_kernels << "\n";
        }
    }
#endif

    cl_platform_id device_platform;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PLATFORM, sizeof(cl_platform_id), &device_platform, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        size_t platform_profile_size;
        err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_PROFILE, 0, NULL, &platform_profile_size);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetPlatformInfo(err_code);
        } else {
            char platform_profile[platform_profile_size];
            err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_PROFILE, platform_profile_size, platform_profile, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetPlatformInfo(err_code);
            } else {
                std::cout << "OpenCL platform profile: " << platform_profile << "\n";
            }
        }

        size_t platform_version_size;
        err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_VERSION, 0, NULL, &platform_version_size);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetPlatformInfo(err_code);
        } else {
            char platform_version[platform_version_size];
            err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_VERSION, platform_version_size, platform_version, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetPlatformInfo(err_code);
            } else {
                std::cout << "OpenCL platform version: " << platform_version << "\n";
            }
        }

        size_t platform_name_size;
        err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_NAME, 0, NULL, &platform_name_size);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetPlatformInfo(err_code);
        } else {
            char platform_name[platform_name_size];
            err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_NAME, platform_name_size, platform_name, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetPlatformInfo(err_code);
            } else {
                std::cout << "Platform name: " << platform_name << "\n";
            }
        }

        size_t platform_vendor_size;
        err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_VENDOR, 0, NULL, &platform_vendor_size);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetPlatformInfo(err_code);
        } else {
            char platform_vendor[platform_vendor_size];
            err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_VENDOR, platform_vendor_size, platform_vendor, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetPlatformInfo(err_code);
            } else {
                std::cout << "Platform vendor: " << platform_vendor << "\n";
            }
        }

        size_t platform_extensions_size;
        err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_EXTENSIONS, 0, NULL, &platform_extensions_size);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetPlatformInfo(err_code);
        } else {
            char platform_extensions[platform_extensions_size];
            err_code = clGetPlatformInfo(device_platform, CL_PLATFORM_EXTENSIONS, platform_extensions_size, platform_extensions, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetPlatformInfo(err_code);
            } else {
                std::cout << "Supported extensions by platform: " << platform_extensions << "\n";
            }
        }
    }

    size_t device_name_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_NAME, 0, NULL, &device_name_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        char device_name[device_name_size];
        err_code = clGetDeviceInfo(device, CL_DEVICE_NAME, device_name_size, device_name, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "Device name: " << device_name << "\n";
        }
    }

    size_t device_vendor_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_VENDOR, 0, NULL, &device_vendor_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        char device_vendor[device_vendor_size];
        err_code = clGetDeviceInfo(device, CL_DEVICE_VENDOR, device_vendor_size, device_vendor, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "Device vendor: " << device_vendor << "\n";
        }
    }

    size_t driver_version_size;
    err_code = clGetDeviceInfo(device, CL_DRIVER_VERSION, 0, NULL, &driver_version_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        char driver_version[driver_version_size];
        err_code = clGetDeviceInfo(device, CL_DRIVER_VERSION, driver_version_size, driver_version, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "OpenCL software driver version: " << driver_version << "\n";
        }
    }

    size_t device_profile_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PROFILE, 0, NULL, &device_profile_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        char device_profile[device_profile_size];
        err_code = clGetDeviceInfo(device, CL_DEVICE_PROFILE, device_profile_size, device_profile, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "OpenCL device profile: " << device_profile << "\n";
        }
    }

    size_t device_version_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_VERSION, 0, NULL, &device_version_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        char device_version[device_version_size];
        err_code = clGetDeviceInfo(device, CL_DEVICE_VERSION, device_version_size, device_version, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "OpenCL device version: " << device_version << "\n";
        }
    }

#ifdef CL_VERSION_1_1
    size_t opencl_c_version_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_OPENCL_C_VERSION, 0, NULL, &opencl_c_version_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        char opencl_c_version[opencl_c_version_size];
        err_code = clGetDeviceInfo(device, CL_DEVICE_OPENCL_C_VERSION, opencl_c_version_size, opencl_c_version, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "OpenCL C version supported by compiler: " << opencl_c_version << "\n";
        }
    }
#endif

    size_t device_extensions_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_EXTENSIONS, 0, NULL, &device_extensions_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        char device_extensions[device_extensions_size];
        err_code = clGetDeviceInfo(device, CL_DEVICE_EXTENSIONS, device_extensions_size, device_extensions, NULL);
        if (err_code != CL_SUCCESS) {
            printErrorOfGetDeviceInfo(err_code);
        } else {
            std::cout << "Supported extensions by device: " << device_extensions << "\n";
        }
    }

#ifdef CL_VERSION_1_2
    size_t printf_buffer_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PRINTF_BUFFER_SIZE, sizeof(size_t), &printf_buffer_size, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum size of internal buffer that holds output of printf calls: " << printf_buffer_size << "\n";
    }

    cl_bool preferred_interop_user_sync;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PREFERRED_INTEROP_USER_SYNC, sizeof(cl_bool), &preferred_interop_user_sync, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "User to be responsible for sync: " << (preferred_interop_user_sync == CL_TRUE ? "True" : "False") << "\n";
    }

    cl_device_id device_parent;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PARENT_DEVICE, sizeof(cl_device_id), &device_parent, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        if (device_parent != NULL) {
            std::cout << "Parent Device: =======================>\n";
            printDeviceInfo(device_parent);
            std::cout << "<================ :End of parent Device\n";
        }
    }

    cl_uint partition_max_sub_devices;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PARTITION_MAX_SUB_DEVICES, sizeof(cl_uint), &partition_max_sub_devices, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Maximum number sub-devices can be created: " << partition_max_sub_devices << "\n";
    }

    size_t device_partition_properties_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PARTITION_PROPERTIES, 0, NULL, &device_partition_properties_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        if (device_partition_properties_size > 0) {
            cl_device_partition_property device_partition_properties[device_partition_properties_size];
            err_code = clGetDeviceInfo(device, CL_DEVICE_PARTITION_PROPERTIES, device_partition_properties_size, device_partition_properties, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Partition types supported by device: ";
                for (size_t i = 0; i < device_partition_properties_size; i++) {
                    switch (device_partition_properties[i]) {
                    case CL_DEVICE_PARTITION_EQUALLY:
                        std::cout << "CL_DEVICE_PARTITION_EQUALLY ";
                        break;
                    case CL_DEVICE_PARTITION_BY_COUNTS:
                        std::cout << "CL_DEVICE_PARTITION_BY_COUNTS ";
                        break;
                    case CL_DEVICE_PARTITION_BY_AFFINITY_DOMAIN:
                        std::cout << "CL_DEVICE_PARTITION_BY_AFFINITY_DOMAIN ";
                        break;
                    }
                }
                std::cout << "\n";
            }
        } else {
            std::cout << "Device cannot be partitioned\n";
        }
    }

    cl_device_affinity_domain affinity_domain;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PARTITION_AFFINITY_DOMAIN, sizeof(cl_device_affinity_domain), &affinity_domain, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        if (affinity_domain != 0) {
            std::cout << "Supported affinity domains: ";
            if (affinity_domain & CL_DEVICE_AFFINITY_DOMAIN_NUMA)
                std::cout << "CL_DEVICE_AFFINITY_DOMAIN_NUMA ";
            if (affinity_domain & CL_DEVICE_AFFINITY_DOMAIN_L4_CACHE)
                std::cout << "CL_DEVICE_AFFINITY_DOMAIN_L4_CACHE ";
            if (affinity_domain & CL_DEVICE_AFFINITY_DOMAIN_L3_CACHE)
                std::cout << "CL_DEVICE_AFFINITY_DOMAIN_L3_CACHE ";
            if (affinity_domain & CL_DEVICE_AFFINITY_DOMAIN_L2_CACHE)
                std::cout << "CL_DEVICE_AFFINITY_DOMAIN_L2_CACHE ";
            if (affinity_domain & CL_DEVICE_AFFINITY_DOMAIN_L1_CACHE)
                std::cout << "CL_DEVICE_AFFINITY_DOMAIN_L1_CACHE ";
            if (affinity_domain & CL_DEVICE_AFFINITY_DOMAIN_NEXT_PARTITIONABLE)
                std::cout << "CL_DEVICE_AFFINITY_DOMAIN_NEXT_PARTITIONABLE ";
            std::cout << "\n";
        } else {
            std::cout << "Device does not support any affinity domains\n";
        }
    }

    size_t device_partition_type_size;
    err_code = clGetDeviceInfo(device, CL_DEVICE_PARTITION_TYPE, 0, NULL, &device_partition_type_size);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        if (device_partition_type_size > 0) {
            cl_device_partition_property device_partition_type[device_partition_type_size];
            err_code = clGetDeviceInfo(device, CL_DEVICE_PARTITION_TYPE, device_partition_type_size, device_partition_type, NULL);
            if (err_code != CL_SUCCESS) {
                printErrorOfGetDeviceInfo(err_code);
            } else {
                std::cout << "Properties specified in clCreateSubDevice: ";
                for (size_t i = 0; i < device_partition_type_size; i++) {
                    switch (device_partition_type[i]) {
                    case CL_DEVICE_AFFINITY_DOMAIN_NUMA:
                        std::cout << "CL_DEVICE_AFFINITY_DOMAIN_NUMA ";
                        break;
                    case CL_DEVICE_AFFINITY_DOMAIN_L4_CACHE:
                        std::cout << "CL_DEVICE_AFFINITY_DOMAIN_L4_CACHE ";
                        break;
                    case CL_DEVICE_AFFINITY_DOMAIN_L3_CACHE:
                        std::cout << "CL_DEVICE_AFFINITY_DOMAIN_L3_CACHE ";
                        break;
                    case CL_DEVICE_AFFINITY_DOMAIN_L2_CACHE:
                        std::cout << "CL_DEVICE_AFFINITY_DOMAIN_L2_CACHE ";
                        break;
                    case CL_DEVICE_AFFINITY_DOMAIN_L1_CACHE:
                        std::cout << "CL_DEVICE_AFFINITY_DOMAIN_L1_CACHE ";
                        break;
                    }
                }
                std::cout << "\n";
            }
        } else {
            std::cout << "No partition type associated with device\n";
        }
    }

    cl_uint device_reference_count;
    err_code = clGetDeviceInfo(device, CL_DEVICE_REFERENCE_COUNT, sizeof(cl_uint), &device_reference_count, NULL);
    if (err_code != CL_SUCCESS) {
        printErrorOfGetDeviceInfo(err_code);
    } else {
        std::cout << "Device reference count: " << device_reference_count << "\n";
    }
#endif
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
