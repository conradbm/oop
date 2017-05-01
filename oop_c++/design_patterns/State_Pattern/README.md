<h2> The State Pattern</h2>

<ul>

<li> The State is a better way of implementing case switch statements in your application</li> 
<li> There exists an State Inferface in which State objects can override w.r.t their corresponding functionality</li>
<li> You allow for a Master class which contains an instance of each State subclass, alongside a current state</li>
<li> For each functionality of the Master, we deligate it to the correct subclass to handle it accordingly</li>
</ul>
