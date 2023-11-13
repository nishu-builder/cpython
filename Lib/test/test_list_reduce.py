import unittest


class ListReduceTests(unittest.TestCase):
    def test_reduce_sum(self):
        self.assertEqual([1, 2, 3, 4].reduce(lambda x, y: x + y, 0), 10)

    def test_reduce_multiply(self):
        self.assertEqual([1, 2, 3, 4].reduce(lambda x, y: x * y, 1), 24)

    def test_reduce_with_initial(self):
        self.assertEqual([1, 2, 3, 4].reduce(lambda x, y: x + y, 10), 20)

    def test_reduce_empty_list_with_initial(self):
        self.assertEqual([].reduce(lambda x, y: x + y, 0), 0)

    def test_reduce_invalid_function(self):
        with self.assertRaises(TypeError):
            [1, 2, 3].reduce("not a function", 0)


if __name__ == '__main__':
    unittest.main()
