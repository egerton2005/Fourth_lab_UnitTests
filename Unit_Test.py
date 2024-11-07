import unittest
import subprocess

class TestPrimeFunction(unittest.TestCase):
    def check_prime(self, value, expected):
        # Запускаем скомпилированную программу и подаем значение на вход
        result = subprocess.run(
            ['./Prime.exe'],
            input=f"{value}\n",
            capture_output=True,
            text=True
        )
        # Проверяем, что результат соответствует ожидаемому
        self.assertEqual(int(result.stdout.strip()), expected)

    def test_prime_numbers(self):
        # Прямые проверки на простые числа
        self.check_prime(2, 1)
        self.check_prime(3, 1)
        self.check_prime(5, 1)
        self.check_prime(7, 1)
        self.check_prime(13, 1)
        self.check_prime(97, 1)

    def test_non_prime_numbers(self):
        # Проверки на составные числа
        self.check_prime(4, 0)
        self.check_prime(6, 0)
        self.check_prime(8, 0)
        self.check_prime(9, 0)
        self.check_prime(10, 0)

    def test_edge_cases(self):
        # Проверки для граничных значений
        self.check_prime(0, 0)
        self.check_prime(1, 0)
        # отрицательное число
        self.check_prime(-5, 0)

    def test_incorrect(self):
        # Проверка при задании невалидных значений
        self.check_prime("test", 0)
        self.check_prime("testing2", 0)
        self.check_prime(10**10, 0)


if __name__ == "__main__":
    unittest.main()
