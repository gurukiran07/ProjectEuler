### Some notes on how to solve PE#9 question.

<pre><code>a = m^2 - n^2
b = 2mn
c = m^2 + n^2
where m > n > 0
<sub><b><i>Reference</i></b> : <a href=https://en.wikipedia.org/wiki/Pythagorean_triple>Pythagorean triple</a></sub></code></pre>

#### Now, substitute these values in eqn `a + b + c = 1000`

<pre><code>m^2 - n^2 + 2mn + m^2 + n^2 = 1000
=> 2(m^2) + 2mn = 1000
=> m^2 + mn = 500
=> m <= sqrt(500 - mn) here, ignore mn.
=> m < sqrt(500)
=> m < 22 here sqrt(500) is 22.3606 but we need only integers.
=> <b>0 < m < 22</b></code></pre>

#### We found out range of `m`, we can derive `n` based on `m` using above eqn.

<pre><code>m^2 - n^2 + 2mn + m^2 + n^2 = 1000
=> m^2 + mn = 500
=> <b>n = (500-m^2)/m</b></code></pre>
