function chia_doi_khoang_cach(a, b)
  while abs(b - a) > 1e-6
    mid = (a + b) / 2;
    if f(mid) * f(a) < 0
      b = mid;
    else
      a = mid;
    end
  end
  fprintf('Nghiệm x ≈ %f\n', (a + b) / 2);
end
