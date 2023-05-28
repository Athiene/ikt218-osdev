extern "C"{
    #include "system.h"
    #include "gdt.h"
    #include "common.h"
    #include "malloc.h"
    #include "paging.h"
    void kernel_main();
}


extern uint32_t end;

// In order to avoid including stdlib, we define the size_t type here. As this is an x86 OS, we define it as a 32-bit unsigned integer.
typedef uint32_t size_t;


// Overload the new operator for single object allocation
void* operator new(size_t size) {
return my_malloc(size); // Call the C standard library function malloc() to allocate memory of the given size and return a pointer
}


// Overload the delete operator for single object deallocation
void operator delete(void* ptr) noexcept {
free(ptr); // Call the C standard library function free() to deallocate the memory pointed to by the given pointer
}


// Overload the new operator for array allocation
void* operator new[](size_t size) {
return my_malloc(size); // Call the C standard library function malloc() to allocate memory of the given size and return a pointer
}


// Overload the delete operator for array deallocation
void operator delete[](void* ptr) noexcept {
free(ptr); // Call the C standard library function free() to deallocate the memory pointed to by the given pointer
}


void kernel_main()
{
    clear_screen();
    init_descriptor_tables();

    
    printk("Hello, %s! The answer \n is %d.", "world", 42);
    printk("%d", 696969420);
    //asm volatile ("int $0x28");
    //asm volatile ("int $0x1");

    // Initialize Paging
    init_paging(); // <------ THIS IS PART OF THE ASSIGNMENT
    
    // Print memory layout
    //print_memory_layout(); // <------ THIS IS PART OF THE ASSIGNMENT
    
    // Setup PIT
    //init_pit(); // <------ THIS IS PART OF THE ASSIGNMENT
    
    // Allocate some memory using kernel memory manager
    // THIS IS PART OF THE ASSIGNMENT
    void* some_memory = my_malloc(12345);

    void* memory2 = my_malloc(54321);
    
    void* memory3 = my_malloc(13331);
    
    char* memory4 = new char[1000]();
}
