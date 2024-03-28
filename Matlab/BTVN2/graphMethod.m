function x0 = ()
    f = @(x) x.^3 - 155;
    g = @(x) nthroot(3,155)
    fplot(f, [0, 6]);
    xlabel('x');
    ylabel('f(x)');
    grid on;
    title('Do thi f(x)');
    hold on
    fplot(g,[0,6]);
    x0 = input('x0 = ');
end
