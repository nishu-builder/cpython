import unittest


def add_one(x):
    return x + 1


class PmapTest(unittest.TestCase):
    a = list(range(50))

    def test_pmap_raises_on_unpicklable_functions(self):
        with self.assertRaises(TypeError):
            self.a.pmap(lambda x: x + 1)

    def test_pmap_works_on_picklable_functions_without_num_workers_specified(self):
        self.assertEqual(
            list(self.a.pmap(add_one)),
            list(map(add_one, self.a))
        )

    def test_pmap_works_on_picklable_functions_with_num_workers_specified(self):
        self.assertEqual(
            list(self.a.pmap(add_one, 2)),
            list(map(add_one, self.a))
        )


if __name__ == '__main__':
    unittest.main()
