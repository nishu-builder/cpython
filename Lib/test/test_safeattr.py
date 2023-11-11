import unittest
from Lib.test.test_syntax import SyntaxTestCase


class A:
    def __init__(self) -> None:
        self.b = 0


class SafeAttrTest(SyntaxTestCase):
    def test_safe_attr_is_safe(self):
        a = None
        with self.assertRaises(AttributeError):
            a.b
        assert a?.b is None

    def test_safe_attr_nonnull_case(self):
        a = A()
        assert a.b == a?.b == 0

    def test_cannot_delete_with_safe_attr(self):
        self._check_error("""
class A:
    def __init__(self) -> None:
        self.b = 0
a = A()

del a.b

del a?.b
""", "syntax")


    def test_cannot_store_with_safe_attr(self):
        self._check_error("""
class A:
    def __init__(self) -> None:
        self.b = 0
a = A()
a.b = 4
a?.b = 3
""", "cannot assign to safe attribute here")


if __name__ == '__main__':
    unittest.main()
