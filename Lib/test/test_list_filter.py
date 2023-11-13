import unittest


class ListFilterTests(unittest.TestCase):
    def test_filter_even_numbers(self):
        self.assertEqual([1, 2, 3, 4, 5, 6].filter(lambda x: x % 2 == 0), [2, 4, 6])

    def test_filter_with_builtin_function(self):
        self.assertEqual(["a", "", "c"].filter(bool), ["a", "c"])

    def test_filter_empty_list(self):
        self.assertEqual([].filter(lambda x: x % 2 == 0), [])

    def test_filter_non_lambda_function(self):
        def is_even(x):
            return x % 2 == 0
        self.assertEqual([1, 2, 3, 4].filter(is_even), [2, 4])

    def test_filter_invalid_function(self):
        with self.assertRaises(TypeError):
            [1, 2, 3].filter("not a function")


if __name__ == '__main__':
    unittest.main()
