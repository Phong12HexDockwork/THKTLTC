function lap(a, b)
  x = (a + b) / 2;
  while abs(f(x)) > 1e-6
    x = (x + f(x)) / 2;
  end
  fprintf('Nghiệm x ≈ %f\n', x);
end
