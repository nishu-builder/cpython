import unittest


class ListMapTests(unittest.TestCase):
    def test_map_simple_function(self):
        self.assertEqual([1, 2, 3].map(lambda x: x ** 2), [1, 4, 9])

    def test_map_with_builtin_function(self):
        self.assertEqual(["a", "b", "c"].map(str.upper), ["A", "B", "C"])

    def test_map_empty_list(self):
        self.assertEqual([].map(lambda x: x ** 2), [])

    def test_map_non_lambda_function(self):
        def square(x):
            return x * x
        self.assertEqual([1, 2, 3].map(square), [1, 4, 9])

    def test_map_with_invalid_function(self):
        with self.assertRaises(TypeError):
            [1, 2, 3].map("not a function")


if __name__ == '__main__':
    unittest.main()
