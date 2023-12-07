import unittest


def is_odd(x):
    return x % 2 == 1


class PfilterTest(unittest.TestCase):
    a = list(range(50))

    def test_pfilter_raises_on_unpicklable_functions(self):
        with self.assertRaises(TypeError):
            self.a.pfilter(lambda x: x % 2 == 1)

    def test_pfilter_works_on_picklable_functions_without_num_workers_specified(self):
        self.assertEqual(
            list(self.a.pmap(is_odd)),
            list(filter(is_odd, self.a))
        )

    def test_pfilter_works_on_picklable_functions_with_num_workers_specified(self):
        self.assertEqual(
            list(self.a.pmap(is_odd, 2)),
            list(filter(is_odd, self.a))
        )


if __name__ == '__main__':
    unittest.main()
