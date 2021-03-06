import './App.css';
import React, {Component} from 'react';
import Person from './Person/Person.js';

class App extends Component {
    state = {
        persons: [
            {name: 'Rod', age: 17},
            {name: 'Randy', age: 16},
            {name: 'Will', age: 15}
        ],
        anotherVar: 'hello',
        showPersons: false
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

    deletePersonHandler = (personIndexInArray) => {
        // Best practice is to copy the old array

        // 1st Approach: const personss = this.state.persons.slice();
        const personss = [...this.state.persons];

        // Removes 1 element from the array
        personss.splice(personIndexInArray,1);

        // Update the array to the state then render
        this.setState({persons: personss});
    }

    nameToggleHandler = () => {
        const showPerson = this.state.showPersons;
        this.setState({showPersons: !showPerson});
    }

    render() {

        // Inline Javascript CSS
        const styleCSS = {
            backgroundColor: 'white',
            font: 'inherit',
            border: '1px solid blue',
            padding: '8px',
            cursor: 'pointer'
        };

        let persons = null;

        if(this.state.showPersons){
            persons = (
                <div>
                    {this.state.persons.map((persons, index) => {
                        return <Person
                     
                            // Add the click props
                            click = {() => this.deletePersonHandler(index)}
                            name={persons.name}
                            age={persons.age}/>
                    })}
                </div>
            );
        }

        return (
            <div className="App">
                <h1>Hi, I'm React App</h1>
                <button style={styleCSS} onClick={this.nameToggleHandler}>Toggle name</button>
                {persons}
            </div>
        )
    }
}

export default App;
