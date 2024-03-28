function [x, iter] = loopMethod(x0)
    f = @(x) x.^3 - 155;
    g = @(x) nthroot(155, 3);
    tol = 0.0005;
    iter = 0;
    while abs(f(x0)) > tol
        x0 = g(x0);
        iter = iter + 1;
    end
    x = x0;
end
