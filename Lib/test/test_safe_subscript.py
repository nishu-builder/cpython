import unittest
from Lib.test.test_syntax import SyntaxTestCase


class SafeSubscriptTest(SyntaxTestCase):
    def test_safe_subscript_is_safe(self):
        a = None
        assert a?['b'] is None

    def test_chained_safe_attr_is_safe(self):
        a = None
        assert a?['b']?['c']?['d'] is None

    def test_safe_attr_identical_to_attr_when_target_is_not_none_with_dictionary(self):
        a = {'b': 'c'}
        assert a?['b'] == 'c'

    def test_safe_attr_identical_to_attr_when_target_is_not_none_with_list(self):
        a = ['b']
        assert a?[0] == 'b'

    def test_cannot_delete_with_safe_attr(self):
        self._check_error("""
a = {'b': 'c'}
del a?['b']
""", "syntax")

    def test_cannot_store_with_safe_attr(self):
        self._check_error("""
a = {'b': 'c'}
a?['b'] = 'd'
""", "cannot assign to safe attribute here")


if __name__ == '__main__':
    unittest.main()
