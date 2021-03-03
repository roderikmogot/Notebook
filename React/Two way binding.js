import './App.css';
import React, {Component} from 'react';
import Person from './Person/Person.js';

class App extends Component{
    state = {
        persons: [
            {name: 'Rod', age: 17},
            {name: 'Randy', age: 16},
            {name: 'Will', age: 15}
        ],
        anotherVar: 'hello'
    };

    switchNameHandler = (newName) => {
            // DON'T DO THIS: this.state.persons[0].name = 'Mogot';
            this.setState({
                persons: [
                    {name: newName, age: 27},
                    {name: 'Randy', age: 16},
                    {name: 'Will', age: 35}
                ]
            });
        };

    nameChangedHandler = event => {
        this.setState({
            persons: [
                {name: 'Rod', age: 27},

                // Target -> the input in which we typed
                // Value -> what we typed
                {name: event.target.value, age: 16},

                {name: 'Will', age: 35}
            ]
        });
    }

    render() {
        return (
            <div className="App">
                <h1>Hi, I'm React App</h1>
                <button onClick={() => this.switchNameHandler('Roderik')}>Switch name</button>
                <Person
                    name={this.state.persons[0].name}
                    age={this.state.persons[0].age}
                    />
                <Person
                    name={this.state.persons[1].name}
                    age={this.state.persons[1].age}
                    click={this.switchNameHandler.bind(this, 'Rode')}
                    changed={this.nameChangedHandler}
                    >
                    My hobbies: running </Person>
                <Person
                    name={this.state.persons[2].name}
                    age={this.state.persons[2].age}/>
            </div>
        )
    }
}

export default App;


// Person/Persons.js
import React from 'react';

const person = (props) => {
    return (
        <div>
            <p onClick={props.click}>I'm {props.name} and I am {props.age} years old!</p>
            <p>{props.children}</p>

            // Adding value as two way binding
            <input type="text" onChange={props.changed} value={props.name}/>
        </div>
    )
};

export default person;
