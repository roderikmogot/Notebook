import './App.css';
import React, {Component} from 'react';
import Person from './Person/Person.js';

class App extends Component{
    // “state” is a reserved property name (and can only be set in class-based components!)
    state = {
        persons: [
            {name: 'Rod', age: 17},
            {name: 'Randy', age: 16},
            {name: 'Will', age: 15}
        ]
    }
    render() {
        return(
            <div className="App">
                <h1>Hi, I'm React App</h1>
                //this refers to the class
                <Person name={this.state.persons[0].name} age={this.state.persons[0].age}/>
                <Person name={this.state.persons[1].name} age={this.state.persons[1].age}> My hobbies: running </Person>
                <Person name={this.state.persons[2].name} age={this.state.persons[2].age}/>

            </div>
        )
    }
}

export default App;
