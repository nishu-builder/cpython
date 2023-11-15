import unittest


class TillTest(unittest.TestCase):
    def test_till_runs(self):
        runs = 0
        till runs == 2:
            runs += 1
        assert runs == 2

    def test_till_passes(self):
        runs = 0
        till runs == 0:
            runs += 1
        assert runs == 0


if __name__ == '__main__':
    unittest.main()


