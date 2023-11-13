import unittest


class TestElifntBranches(unittest.TestCase):

    # Tests for "if" before "elifnt"
    def test_if_before_elifnt_if_branch(self):
        x = True
        y = False
        if x:
            result = "if"
        elifnt y:
            result = "elifnt"
        self.assertEqual(result, "if")

    def test_if_before_elifnt_elifnt_branch(self):
        x = False
        y = False
        if x:
            result = "if"
        elifnt y:
            result = "elifnt"
        self.assertEqual(result, "elifnt")

    # Tests for "elif" before "elifnt"
    def test_elif_before_elifnt_elif_branch(self):
        x = False
        y = True
        z = False
        if x:
            result = "if"
        elif y:
            result = "elif"
        elifnt z:
            result = "elifnt"
        self.assertEqual(result, "elif")

    def test_elif_before_elifnt_elifnt_branch(self):
        x = False
        y = False
        z = False
        if x:
            result = "if"
        elif y:
            result = "elif"
        elifnt z:
            result = "elifnt"
        self.assertEqual(result, "elifnt")

    # Tests for "elifnt" before "elifnt"
    def test_elifnt_before_elifnt_first_elifnt_branch(self):
        x = False
        y = False
        z = False
        if x:
            result = "if"
        elifnt y:
            result = "first elifnt"
        elifnt z:
            result = "second elifnt"
        self.assertEqual(result, "first elifnt")

    def test_elifnt_before_elifnt_second_elifnt_branch(self):
        x = False
        y = True
        z = False
        if x:
            result = "if"
        elifnt y:
            result = "first elifnt"
        elifnt z:
            result = "second elifnt"
        self.assertEqual(result, "second elifnt")

    # Tests for "elifnt" before "else"
    def test_elifnt_before_else_elifnt_branch(self):
        x = False
        y = False
        if x:
            result = "if"
        elifnt y:
            result = "elifnt"
        else:
            result = "else"
        self.assertEqual(result, "elifnt")

    def test_elifnt_before_else_else_branch(self):
        x = False
        y = True
        if x:
            result = "if"
        elifnt y:
            result = "elifnt"
        else:
            result = "else"
        self.assertEqual(result, "else")

    # Tests for "elifnt" before "elif"
    def test_elifnt_before_elif_elifnt_branch(self):
        x = False
        y = False
        z = True
        if x:
            result = "if"
        elifnt y:
            result = "elifnt"
        elif z:
            result = "elif"
        self.assertEqual(result, "elifnt")

    def test_elifnt_before_elif_elif_branch(self):
        x = False
        y = True
        z = True
        if x:
            result = "if"
        elifnt y:
            result = "elifnt"
        elif z:
            result = "elif"
        self.assertEqual(result, "elif")


if __name__ == '__main__':
    unittest.main()
