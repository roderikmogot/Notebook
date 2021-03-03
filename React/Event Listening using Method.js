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
    }

    // method for event listening
    switchNameHandler = () => {
        // DON'T DO THIS: this.state.persons[0].name = 'Mogot';
        this.setState({
                persons: [
                    {name: 'Roderik', age: 27},
                    {name: 'Randy', age: 16},
                    {name: 'Will', age: 35}
                ]
          // NOTE: anotherVar isn't changed as long as setState only updates the persons array
        })
    }
    

    render() {
        return(
            <div className="App">
                <h1>Hi, I'm React App</h1>
                <button onClick={this.switchNameHandler}>Switch name</button>
                <Person name={this.state.persons[0].name} age={this.state.persons[0].age}/>
                <Person name={this.state.persons[1].name} age={this.state.persons[1].age}> My hobbies: running </Person>
                <Person name={this.state.persons[2].name} age={this.state.persons[2].age}/>

            </div>
        )
    }
}

export default App;
