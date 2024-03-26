function newton(a, b)
  x = (a + b) / 2;
  while abs(f(x)) > 1e-6
    x = x - f(x) / f_prime(x);
  end
  fprintf('Nghiệm x ≈ %f\n', x);
end
