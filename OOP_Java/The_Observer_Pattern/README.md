<h2>The Observer Pattern</h2>
<p>Probably one of the most used design patterns </p>
<p>Analogy of a news paper subscription/unsubscriptions. We just have 1 
local source and others who are interested in a specific thing if it 
changes; disbatched uniquely. </p>
<p> A one-to-many dependency betweena set of objects. If the Subject 
object changes (owns the data; one copy of it), then the dependents are 
notified; they are dependent on the Subject object to receive data. </p>

<p> A Subject object could include: </p>
<ul>
<li> registerObserver()</li>
<li> removeObserver()</li>
<li> notifyObservers() </li>
<li> The Observer Object will only contain update() which the 
Subject will call to notify the Observer the data has changed</li>
 </ul>

<p> Having abstract Subject classes and Observer classes, our 
conrete classes will have these blueprints and have setters and 
getters for the connection between observers for a subject</p>
<ul>
<li> </li>
 </ul>
