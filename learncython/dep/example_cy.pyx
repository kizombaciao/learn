cpdef int test(int x):
    cdef int y = 0
    cdef int i
    for i in range(x):
        y += i
    return y

# > python3 setup.py build_ext --inplace
#     