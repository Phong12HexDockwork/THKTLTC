function x = (x0)
    f = @(x) x.^3 - 155;
    f_prime = @(x) 3 * x.^2;
    tol = 0.0005;
    iter = 0;
    while abs(f(x0)) > tol
        x0 = x0 - f(x0) / f_prime(x0);
        iter = iter + 1;
    end
    x = x0;
end
