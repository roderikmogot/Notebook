import React from 'react';

//props can be change
const person = (props) => {
    return (
        <div>
        
            <p>I'm {props.name} and I am {props.age} years old!</p>
        
            <p>{props.children}</p>
            //children -> characters between opening and closing html tags
        
        </div>
    )
};

export default person;

//In App.js
<Person name="Roderik" age="17"/>
<Person name="Sam" age="19"> My hobbies: running </Person>
<Person name="Jay" age="21"/>
