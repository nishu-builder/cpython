/*[clinic input]
preserve
[clinic start generated code]*/

#if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)
#  include "pycore_gc.h"          // PyGC_Head
#  include "pycore_runtime.h"     // _Py_ID()
#endif
#include "pycore_abstract.h"      // _PyNumber_Index()
#include "pycore_modsupport.h"    // _PyArg_CheckPositional()

PyDoc_STRVAR(list_insert__doc__,
"insert($self, index, object, /)\n"
"--\n"
"\n"
"Insert object before index.");

#define LIST_INSERT_METHODDEF    \
    {"insert", _PyCFunction_CAST(list_insert), METH_FASTCALL, list_insert__doc__},

static PyObject *
list_insert_impl(PyListObject *self, Py_ssize_t index, PyObject *object);

static PyObject *
list_insert(PyListObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    Py_ssize_t index;
    PyObject *object;

    if (!_PyArg_CheckPositional("insert", nargs, 2, 2)) {
        goto exit;
    }
    {
        Py_ssize_t ival = -1;
        PyObject *iobj = _PyNumber_Index(args[0]);
        if (iobj != NULL) {
            ival = PyLong_AsSsize_t(iobj);
            Py_DECREF(iobj);
        }
        if (ival == -1 && PyErr_Occurred()) {
            goto exit;
        }
        index = ival;
    }
    object = args[1];
    return_value = list_insert_impl(self, index, object);

exit:
    return return_value;
}

PyDoc_STRVAR(list_clear__doc__,
"clear($self, /)\n"
"--\n"
"\n"
"Remove all items from list.");

#define LIST_CLEAR_METHODDEF    \
    {"clear", (PyCFunction)list_clear, METH_NOARGS, list_clear__doc__},

static PyObject *
list_clear_impl(PyListObject *self);

static PyObject *
list_clear(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list_clear_impl(self);
}

PyDoc_STRVAR(list_copy__doc__,
"copy($self, /)\n"
"--\n"
"\n"
"Return a shallow copy of the list.");

#define LIST_COPY_METHODDEF    \
    {"copy", (PyCFunction)list_copy, METH_NOARGS, list_copy__doc__},

static PyObject *
list_copy_impl(PyListObject *self);

static PyObject *
list_copy(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list_copy_impl(self);
}

PyDoc_STRVAR(list_append__doc__,
"append($self, object, /)\n"
"--\n"
"\n"
"Append object to the end of the list.");

#define LIST_APPEND_METHODDEF    \
    {"append", (PyCFunction)list_append, METH_O, list_append__doc__},

PyDoc_STRVAR(list_map__doc__,
"map($self, func, /)\n"
"--\n"
"\n"
"Map a function over a list");

#define LIST_MAP_METHODDEF    \
    {"map", (PyCFunction)list_map, METH_O, list_map__doc__},

PyDoc_STRVAR(list_pfilter__doc__,
"pfilter($self, func, num_workers=None, /)\n"
"--\n"
"\n"
"Parallel map a function over a list");

#define LIST_PFILTER_METHODDEF    \
    {"pfilter", _PyCFunction_CAST(list_pfilter), METH_FASTCALL, list_pfilter__doc__},

static PyObject *
list_pfilter_impl(PyListObject *self, PyObject *func, PyObject *num_workers);

static PyObject *
list_pfilter(PyListObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *func;
    PyObject *num_workers = Py_None;

    if (!_PyArg_CheckPositional("pfilter", nargs, 1, 2)) {
        goto exit;
    }
    func = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    num_workers = args[1];
skip_optional:
    return_value = list_pfilter_impl(self, func, num_workers);

exit:
    return return_value;
}

PyDoc_STRVAR(list_pmap__doc__,
"pmap($self, func, num_workers=None, /)\n"
"--\n"
"\n"
"Parallel map a function over a list");

#define LIST_PMAP_METHODDEF    \
    {"pmap", _PyCFunction_CAST(list_pmap), METH_FASTCALL, list_pmap__doc__},

static PyObject *
list_pmap_impl(PyListObject *self, PyObject *func, PyObject *num_workers);

static PyObject *
list_pmap(PyListObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *func;
    PyObject *num_workers = Py_None;

    if (!_PyArg_CheckPositional("pmap", nargs, 1, 2)) {
        goto exit;
    }
    func = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    num_workers = args[1];
skip_optional:
    return_value = list_pmap_impl(self, func, num_workers);

exit:
    return return_value;
}

PyDoc_STRVAR(list_reduce__doc__,
"reduce($self, function, initial=None, /)\n"
"--\n"
"\n"
"Apply function of two arguments cumulatively to the items of the list.");

#define LIST_REDUCE_METHODDEF    \
    {"reduce", _PyCFunction_CAST(list_reduce), METH_FASTCALL, list_reduce__doc__},

static PyObject *
list_reduce_impl(PyListObject *self, PyObject *function, PyObject *initial);

static PyObject *
list_reduce(PyListObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *function;
    PyObject *initial = Py_None;

    if (!_PyArg_CheckPositional("reduce", nargs, 1, 2)) {
        goto exit;
    }
    function = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    initial = args[1];
skip_optional:
    return_value = list_reduce_impl(self, function, initial);

exit:
    return return_value;
}

PyDoc_STRVAR(list_filter__doc__,
"filter($self, predicate, /)\n"
"--\n"
"\n"
"Return a new list containing all items from the list for which predicate(item) is true.");

#define LIST_FILTER_METHODDEF    \
    {"filter", (PyCFunction)list_filter, METH_O, list_filter__doc__},

PyDoc_STRVAR(list_extend__doc__,
"extend($self, iterable, /)\n"
"--\n"
"\n"
"Extend list by appending elements from the iterable.");

#define LIST_EXTEND_METHODDEF    \
    {"extend", (PyCFunction)list_extend, METH_O, list_extend__doc__},

PyDoc_STRVAR(list_pop__doc__,
"pop($self, index=-1, /)\n"
"--\n"
"\n"
"Remove and return item at index (default last).\n"
"\n"
"Raises IndexError if list is empty or index is out of range.");

#define LIST_POP_METHODDEF    \
    {"pop", _PyCFunction_CAST(list_pop), METH_FASTCALL, list_pop__doc__},

static PyObject *
list_pop_impl(PyListObject *self, Py_ssize_t index);

static PyObject *
list_pop(PyListObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    Py_ssize_t index = -1;

    if (!_PyArg_CheckPositional("pop", nargs, 0, 1)) {
        goto exit;
    }
    if (nargs < 1) {
        goto skip_optional;
    }
    {
        Py_ssize_t ival = -1;
        PyObject *iobj = _PyNumber_Index(args[0]);
        if (iobj != NULL) {
            ival = PyLong_AsSsize_t(iobj);
            Py_DECREF(iobj);
        }
        if (ival == -1 && PyErr_Occurred()) {
            goto exit;
        }
        index = ival;
    }
skip_optional:
    return_value = list_pop_impl(self, index);

exit:
    return return_value;
}

PyDoc_STRVAR(list_sort__doc__,
"sort($self, /, *, key=None, reverse=False)\n"
"--\n"
"\n"
"Sort the list in ascending order and return None.\n"
"\n"
"The sort is in-place (i.e. the list itself is modified) and stable (i.e. the\n"
"order of two equal elements is maintained).\n"
"\n"
"If a key function is given, apply it once to each list item and sort them,\n"
"ascending or descending, according to their function values.\n"
"\n"
"The reverse flag can be set to sort in descending order.");

#define LIST_SORT_METHODDEF    \
    {"sort", _PyCFunction_CAST(list_sort), METH_FASTCALL|METH_KEYWORDS, list_sort__doc__},

static PyObject *
list_sort_impl(PyListObject *self, PyObject *keyfunc, int reverse);

static PyObject *
list_sort(PyListObject *self, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    #if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)

    #define NUM_KEYWORDS 2
    static struct {
        PyGC_Head _this_is_not_used;
        PyObject_VAR_HEAD
        PyObject *ob_item[NUM_KEYWORDS];
    } _kwtuple = {
        .ob_base = PyVarObject_HEAD_INIT(&PyTuple_Type, NUM_KEYWORDS)
        .ob_item = { &_Py_ID(key), &_Py_ID(reverse), },
    };
    #undef NUM_KEYWORDS
    #define KWTUPLE (&_kwtuple.ob_base.ob_base)

    #else  // !Py_BUILD_CORE
    #  define KWTUPLE NULL
    #endif  // !Py_BUILD_CORE

    static const char * const _keywords[] = {"key", "reverse", NULL};
    static _PyArg_Parser _parser = {
        .keywords = _keywords,
        .fname = "sort",
        .kwtuple = KWTUPLE,
    };
    #undef KWTUPLE
    PyObject *argsbuf[2];
    Py_ssize_t noptargs = nargs + (kwnames ? PyTuple_GET_SIZE(kwnames) : 0) - 0;
    PyObject *keyfunc = Py_None;
    int reverse = 0;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 0, 0, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    if (!noptargs) {
        goto skip_optional_kwonly;
    }
    if (args[0]) {
        keyfunc = args[0];
        if (!--noptargs) {
            goto skip_optional_kwonly;
        }
    }
    reverse = PyObject_IsTrue(args[1]);
    if (reverse < 0) {
        goto exit;
    }
skip_optional_kwonly:
    return_value = list_sort_impl(self, keyfunc, reverse);

exit:
    return return_value;
}

PyDoc_STRVAR(list_reverse__doc__,
"reverse($self, /)\n"
"--\n"
"\n"
"Reverse *IN PLACE*.");

#define LIST_REVERSE_METHODDEF    \
    {"reverse", (PyCFunction)list_reverse, METH_NOARGS, list_reverse__doc__},

static PyObject *
list_reverse_impl(PyListObject *self);

static PyObject *
list_reverse(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list_reverse_impl(self);
}

PyDoc_STRVAR(list_index__doc__,
"index($self, value, start=0, stop=sys.maxsize, /)\n"
"--\n"
"\n"
"Return first index of value.\n"
"\n"
"Raises ValueError if the value is not present.");

#define LIST_INDEX_METHODDEF    \
    {"index", _PyCFunction_CAST(list_index), METH_FASTCALL, list_index__doc__},

static PyObject *
list_index_impl(PyListObject *self, PyObject *value, Py_ssize_t start,
                Py_ssize_t stop);

static PyObject *
list_index(PyListObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *value;
    Py_ssize_t start = 0;
    Py_ssize_t stop = PY_SSIZE_T_MAX;

    if (!_PyArg_CheckPositional("index", nargs, 1, 3)) {
        goto exit;
    }
    value = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    if (!_PyEval_SliceIndexNotNone(args[1], &start)) {
        goto exit;
    }
    if (nargs < 3) {
        goto skip_optional;
    }
    if (!_PyEval_SliceIndexNotNone(args[2], &stop)) {
        goto exit;
    }
skip_optional:
    return_value = list_index_impl(self, value, start, stop);

exit:
    return return_value;
}

PyDoc_STRVAR(list_count__doc__,
"count($self, value, /)\n"
"--\n"
"\n"
"Return number of occurrences of value.");

#define LIST_COUNT_METHODDEF    \
    {"count", (PyCFunction)list_count, METH_O, list_count__doc__},

PyDoc_STRVAR(list_remove__doc__,
"remove($self, value, /)\n"
"--\n"
"\n"
"Remove first occurrence of value.\n"
"\n"
"Raises ValueError if the value is not present.");

#define LIST_REMOVE_METHODDEF    \
    {"remove", (PyCFunction)list_remove, METH_O, list_remove__doc__},

PyDoc_STRVAR(list___init____doc__,
"list(iterable=(), /)\n"
"--\n"
"\n"
"Built-in mutable sequence.\n"
"\n"
"If no argument is given, the constructor creates a new empty list.\n"
"The argument must be an iterable if specified.");

static int
list___init___impl(PyListObject *self, PyObject *iterable);

static int
list___init__(PyObject *self, PyObject *args, PyObject *kwargs)
{
    int return_value = -1;
    PyTypeObject *base_tp = &PyList_Type;
    PyObject *iterable = NULL;

    if ((Py_IS_TYPE(self, base_tp) ||
         Py_TYPE(self)->tp_new == base_tp->tp_new) &&
        !_PyArg_NoKeywords("list", kwargs)) {
        goto exit;
    }
    if (!_PyArg_CheckPositional("list", PyTuple_GET_SIZE(args), 0, 1)) {
        goto exit;
    }
    if (PyTuple_GET_SIZE(args) < 1) {
        goto skip_optional;
    }
    iterable = PyTuple_GET_ITEM(args, 0);
skip_optional:
    return_value = list___init___impl((PyListObject *)self, iterable);

exit:
    return return_value;
}

PyDoc_STRVAR(list___sizeof____doc__,
"__sizeof__($self, /)\n"
"--\n"
"\n"
"Return the size of the list in memory, in bytes.");

#define LIST___SIZEOF___METHODDEF    \
    {"__sizeof__", (PyCFunction)list___sizeof__, METH_NOARGS, list___sizeof____doc__},

static PyObject *
list___sizeof___impl(PyListObject *self);

static PyObject *
list___sizeof__(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list___sizeof___impl(self);
}

PyDoc_STRVAR(list___reversed____doc__,
"__reversed__($self, /)\n"
"--\n"
"\n"
"Return a reverse iterator over the list.");

#define LIST___REVERSED___METHODDEF    \
    {"__reversed__", (PyCFunction)list___reversed__, METH_NOARGS, list___reversed____doc__},

static PyObject *
list___reversed___impl(PyListObject *self);

static PyObject *
list___reversed__(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list___reversed___impl(self);
}
/*[clinic end generated code: output=9910ef31a479623c input=a9049054013a1b77]*/
